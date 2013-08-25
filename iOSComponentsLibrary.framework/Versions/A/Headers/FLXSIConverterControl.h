#import "FLXSIFilterControl.h"
#import "FLXSVersion.h"

@protocol FLXSIConverterControl        <FLXSIFilterControl>
-(NSObject*)convert:(NSString*)val;
@end

