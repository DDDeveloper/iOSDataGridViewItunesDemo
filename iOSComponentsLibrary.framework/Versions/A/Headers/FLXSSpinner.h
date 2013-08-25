

#import <Foundation/Foundation.h>
#import "FLXSVersion.h"

@interface FLXSSpinner : UIView

@property (nonatomic,strong) NSString * label;
@property (nonatomic,assign) float startX;
@property (nonatomic,assign) float startY;

@property (nonatomic, strong)  UIActivityIndicatorView * activityIndicator;
@property (nonatomic, strong)  UILabel * spinnerLabel;

@property (nonatomic, assign) BOOL  labelShowBackground;
@property (nonatomic, strong)  UIColor * labelBackgroundColor;
@property (nonatomic, strong)  UIColor * labelColor;
@property (nonatomic, strong)  UIColor * spinnerColor;



-(void)startSpin;
-(void)stopSpin;
-(UIView*)spinner;
-(void)validateNow;
@end