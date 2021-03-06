#import <Foundation/Foundation.h>
#import "KWMock.h"
#import "KWMessageSpying.h"

@interface KWCaptureSpy : NSObject<KWMessageSpying> {
  id _argument;
  NSUInteger _argumentIndex;
}

- (id)initWithArgumentIndex:(NSUInteger)index;
@property(nonatomic, readonly, retain) id argument;

@end

@interface KWMock (CaptureAdditions)
- (KWCaptureSpy *)capture:(SEL)selector atIndex:(NSUInteger)index andReturn:(id)value;
- (KWCaptureSpy *)capture:(SEL)selector atIndex:(NSUInteger)index;
- (KWCaptureSpy *)capture:(SEL)selector atIndex:(NSUInteger)index argumentFilters:(NSArray *)array;
@end
