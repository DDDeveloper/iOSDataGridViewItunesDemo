#import "FLXSVersion.h"
#import "FLXSISpinner.h"
#import "FLXSClassFactory.h"

@class FLXSEvent;

@protocol FLXSISpinnerOwner

@property (nonatomic, assign) BOOL showSpinnerOnCreationComplete;
@property (nonatomic, strong) NSString* spinnerLabel;
@property (nonatomic, strong) UIView<FLXSISpinner>* spinner;
@property (nonatomic, strong) FLXSClassFactory* spinnerFactory;
@property (nonatomic, strong) NSArray* elementsToBlur;
@property (nonatomic, strong) UIView* elementToCenter;
@property (nonatomic, strong) UIView* spinnerParent;
@property (nonatomic, assign) int numChildren;


-(void)showSpinner:(NSString*)msg;
-(void)hideSpinner;

-(id)getStyle:(NSString*)styleProp;

//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListener:(NSString *)type target:(NSObject *)target handler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods
@end

