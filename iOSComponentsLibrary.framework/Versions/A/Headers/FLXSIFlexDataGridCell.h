#import "FLXSVersion.h"
#import "FLXSEvent.h"
@class FLXSClassFactory;
@class FLXSFlexDataGridColumnLevel;
@class FLXSFlexDataGridColumn;
@class FLXSRowInfo;
@class FLXSComponentInfo;
@protocol FLXSIExpandCollapseComponent;
@protocol FLXSIFlexDataGridCell



@property (nonatomic,strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic,strong) FLXSFlexDataGridColumn* column;

@property (nonatomic,readonly) BOOL isChromeCell;
@property (nonatomic,readonly) BOOL isContentArea;
@property (nonatomic,readonly) BOOL isDataCell;
@property (nonatomic,readonly) BOOL isElastic;
@property (nonatomic,readonly) BOOL isLeftLocked;
@property (nonatomic,readonly) BOOL isLocked;
@property (nonatomic,readonly) BOOL isRightLocked;

@property (nonatomic,readonly) float nestDepth;
@property (nonatomic,readonly) float perceivedX;

@property (nonatomic,weak) UIView* renderer;

@property (nonatomic,strong) FLXSClassFactory* rendererFactory;
@property (nonatomic,strong) FLXSRowInfo* rowInfo;
@property (nonatomic,assign) BOOL destroyed;
@property (nonatomic,assign) BOOL wordWrap;
@property (nonatomic,assign) BOOL selectable;

@property (nonatomic,assign) BOOL isNewlyCreated;

@property (nonatomic,strong) NSString* text;


@property (nonatomic, assign) int horizontalScrollPosition;
@property (nonatomic, assign) int verticalScrollPosition;
@property (nonatomic, strong) NSString* horizontalScrollPolicy;
@property (nonatomic, strong) NSString* verticalScrollPolicy;
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;

- (void)setActualSizeWithWidth:(float)width andHeight:(float)height;

//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListenerOfType:(NSString *)type usingTarget:(NSObject *)target withHandler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods



@property (nonatomic,strong) NSObject * currentBackgroundColors;
@property (nonatomic,strong) NSObject * currentTextColors;
@property (nonatomic,strong) FLXSComponentInfo* componentInfo;
@property (nonatomic,assign) BOOL backgroundDirty;
@property (nonatomic, readonly) UIColor * horizontalGridLineColor;
@property (nonatomic,readonly) UIColor * verticalGridLineColor;
@property (nonatomic,readonly) float horizontalGridLineThickness;
@property (nonatomic,readonly) float verticalGridLineThickness;
@property (nonatomic,readonly) BOOL drawTopBorder;
@property (nonatomic,readonly) BOOL isExpandCollapseCell;
@property (nonatomic,readonly) UIView<FLXSIExpandCollapseComponent>* iExpandCollapseComponent;

- (CGPoint)placeComponent:(UIView *)cellRenderer unscaledWidth:(float)unscaledWidth unscaledHeight:(float)unscaledHeight usePadding:(BOOL)usePadding;

- (void)drawRightBorder:(float)unscaledWidth unscaledHeight:(float)unscaledHeight;
-(id)getBackgroundColors;
-(id)getRolloverColor;
-(id)getRolloverTextColor;
-(id)getStyleValue:(NSString*)styleProp;
-(id)getTextColors;
-(BOOL)hasHorizontalGridLines;
-(BOOL)hasVerticalGridLines;
-(void)setStyle:(NSString*)styleProp :(id)value;
-(id)getStyle:(NSString*)styleProp;
-(void)refreshCell;
-(void)destroy;
-(void)invalidateBackground;
- (void)invalidateDisplayList;

@end

