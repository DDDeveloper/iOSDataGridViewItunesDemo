#import "FLXSVersion.h"
@protocol FLXSISpinnerOwner;
@class FLXSEvent;

@interface FLXSSpinnerBehavior : NSObject
{
}

@property (nonatomic, strong) UIView<FLXSISpinnerOwner>* ownerComponent;

-(id)initWithGrid:(UIView<FLXSISpinnerOwner>*)ownerComponent;
 -(void)showSpinner:(NSString*)msg;
-(void)hideSpinner;

@end

