#import "FLXSVersion.h"


@interface FLXSPoint : NSObject
{
    @private
    float   x,y;
}

@property float x;
@property float y;


-(id)initWithX:(float)xValue  andY:(float)yValue;

@end
