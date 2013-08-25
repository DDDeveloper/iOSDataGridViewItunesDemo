#import "FLXSIFilterControl.h"
#import "FLXSVersion.h"

@protocol FLXSIFilterControlContainer
-(void)registerIFilterControl:(UIView <FLXSIFilterControl>*)iFilterControl;
-(void)unRegisterIFilterControl:(UIView <FLXSIFilterControl>*)iFilterControl;
-(NSMutableArray*)getFilterArguments;
-(NSMutableArray*)getFilterControls;
@end

