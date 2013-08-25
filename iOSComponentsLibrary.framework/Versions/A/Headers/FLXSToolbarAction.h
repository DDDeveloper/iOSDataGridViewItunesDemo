#import "FLXSVersion.h"
@class FLXSEvent;

@interface FLXSToolbarAction : NSObject
{

}

@property (nonatomic, strong) NSObject* trigger;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) BOOL separatorBefore;
@property (nonatomic, assign) BOOL separatorAfter;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* code;
@property (nonatomic, strong) NSString* tooltip;
@property (nonatomic, strong) NSObject* iconUrl;
@property (nonatomic, strong) NSObject* disabledIconUrl;
@property (nonatomic, assign) BOOL requiresSelection;
@property (nonatomic, assign) BOOL requiresSingleSelection;
@property (nonatomic, assign) int level;
@property (nonatomic, strong) NSArray* subActions;
@property (nonatomic, assign) BOOL dropDownOnly;
@property (nonatomic, strong) NSString* isEnabledFunction;
@property (nonatomic, strong) NSString* executedFunction;
@property (nonatomic, assign) id delegate;


-(id)initWithName:(NSString *)name
         andLevel:(int)level
          andCode:(NSString *)code
       andToolTip:(NSString *)tooltip
           andIcon:(NSObject *)iconUrl
andSeparatorBefore:(BOOL)separatorBefore
 andSeparatorAfter:(BOOL)separatorAfter
       andSubActions:(NSArray *)subActions
      andRequiresSelection:(BOOL)requiresSelection
andRequiresSingleSelection:(BOOL)requiresSingleSelection
        andDisabledIconUrl:(NSObject *)disableIconUrl
        andEnabledFunction:(NSString *)isEnabledFunction
       andExecutedFunction:(NSString *)executedFunction
               andDelegate:(id)delegate;


//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListener:(NSString *)type target:(NSObject *)target handler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods
//IDelayChange

-(BOOL)isRegularAction;
-(BOOL)isDropDownAction;
-(BOOL)isSeparator;
-(NSArray*)children;
-(NSString*)label;

+ (NSString*)DEFAULT_ICON;
@end

