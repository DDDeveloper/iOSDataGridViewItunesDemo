#import "FLXSVersion.h"
@protocol FLXSISpinner

@property (nonatomic,strong) NSString * label;
@property (nonatomic,assign) float startX;
@property (nonatomic,assign) float startY;

-(void)startSpin;
-(void)stopSpin;
-(UIView*)spinner;
-(void)validateNow;
@end

