#import "FLXSFilterExpression.h"
#import "FLXSIFilterControl.h"
#import "FLXSVersion.h"

@protocol FLXSICustomMatchFilterControl      <FLXSIFilterControl>
-(BOOL)isMatch:(NSObject*)item;
@end

