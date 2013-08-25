#import "FLXSVersion.h"
#import "FLXSPoint.h"
#import "UIView+UIViewAdditions.h"
#import "FLXSIFlexDataGridCell.h"
@class FLXSFlexDataGridColumnLevel;
@class FLXSFlexDataGridColumn;
@class FLXSRowInfo;
@class FLXSComponentInfo;
@class FLXSClassFactory;
@class FLXSExpandCollapseIcon;
@class FLXSEvent;
@protocol FLXSIExpandCollapseComponent;

@interface FLXSFlexDataGridCell : UIView<FLXSIFlexDataGridCell>
{
}

@property (nonatomic, strong) FLXSFlexDataGridColumn* column;
@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic, strong) FLXSRowInfo* rowInfo;
@property (nonatomic, strong) NSObject * currentBackgroundColors;
@property (nonatomic, strong) NSObject * currentTextColors;
@property (nonatomic, strong) FLXSComponentInfo* componentInfo;
@property (nonatomic, strong) FLXSClassFactory* rendererFactory;
@property (nonatomic, weak) UIView* renderer;
@property (nonatomic, weak) UIViewController* rendererController;
@property (nonatomic, assign) BOOL destroyed;
@property (nonatomic, assign) BOOL isNewlyCreated;
@property (nonatomic, assign) BOOL moving;
@property (nonatomic, strong) UIImageView* colIcon;
@property (nonatomic, assign) BOOL backgroundDirty;
@property (nonatomic, strong) NSTimer* iconTimer;
@property (nonatomic, strong) FLXSExpandCollapseIcon* expandCollapseIcon;
@property (nonatomic, strong) NSString* text;
@property (nonatomic, assign) BOOL wordWrap;
@property (nonatomic, assign) BOOL truncateToFit;
@property (nonatomic, assign) BOOL selectable;


/**
*  Flag that indicates whether to show vertical grid lines between
*  the columns.
*  If <code>true</code>, shows vertical grid lines.
*  If <code>false</code>, hides vertical grid lines.
*  @default true
* [Style(name="verticalGridLines", type="Boolean", inherit="no")]
* @type {null}
* @property verticalGridLines
* @default null
*/

@property (nonatomic, assign) BOOL verticalGridLines ;
/**
 *  Flag that indicates whether to show horizontal grid lines between
 *  the rows.
 *  If <code>true</code>, shows horizontal grid lines.
 *  If <code>false</code>, hides horizontal grid lines.
 *  @default false
 * [Style(name="horizontalGridLines", type="Boolean", inherit="no")]
 * @type {null}
 * @property horizontalGridLines
 * @default null
 */

@property (nonatomic, assign) BOOL  horizontalGridLines ;
/**
 *  The color of the vertical grid lines.
 *  @default 0x666666
 * [Style(name="verticalGridLineColor", type="uint", format="Color", inherit="yes")]
 * @type {null}
 * @property verticalGridLineColor
 * @default null
 */

@property (nonatomic, readonly) UIColor*  verticalGridLineColor ;
/**
 *  The color of the horizontal grid lines.
 * [Style(name="horizontalGridLineColor", type="uint", format="Color", inherit="yes")]
 * @type {null}
 * @property horizontalGridLineColor
 * @default null
 */

@property (nonatomic, readonly) UIColor* horizontalGridLineColor ;
/**
 *  Thickness of the horizontal grid lines.
 *  @default 1
 * [Style(name="horizontalGridLineThickness", type="Number", format="Length", inherit="yes")]
 * @type {null}
 * @property horizontalGridLineThickness
 * @default null
 */

@property (nonatomic, readonly) float horizontalGridLineThickness;
/**
 *  Thickness of the vertical grid lines.
 *  @default 1
 * [Style(name="verticalGridLineThickness", type="Number", format="Length", inherit="yes")]
 * @type {null}
 * @property verticalGridLineThickness
 * @default null
 */

@property (nonatomic, readonly) float  verticalGridLineThickness ;
@property (nonatomic, readonly) NSString* prefix;



- (void)initCommon;

-(BOOL)isNewlyCreated;
-(void)destroy;

-(void)refreshCell;
-(void)enabled:(BOOL)val;
-(void)onIconMouseOver:(FLXSEvent*)evnt;
-(void)onIconMouseClick:(FLXSEvent*)evt;
-(void)onTimerComplete:(NSTimer*)evt;
-(void)onIconMouseOut:(FLXSEvent*)evnt;
-(id)getIconUrl:(BOOL)over;
- (void)setRendererSize:(UIView *)cellRenderer width:(float)w height:(float)h;
 -(float)getLeftPadding;
 -(void)placeIcon;
-(void)placeExpandCollapseIcon;
- (void)drawCell:(float)unscaledWidth unscaledHeight:(float)unscaledHeight;
- (CGPoint)placeComponent:(UIView *)cellRenderer unscaledWidth:(float)unscaledWidth unscaledHeight:(float)unscaledHeight usePadding:(BOOL)usePadding;
 -(NSString*)capitalizeFirstLetterIfPrefix:(NSString*)val;
-(BOOL)hasVerticalGridLines;
-(BOOL)hasHorizontalGridLines;

-(BOOL)drawTopBorder;
- (void)drawBackground:(float)unscaledWidth unscaledHeight:(float)unscaledHeight;
-(id)getRolloverColor;
-(id)getRolloverTextColor;
-(id)getTextColors;
-(id)getBackgroundColors;

- (void)drawRightBorder:(float)unscaledWidth unscaledHeight:(float)unscaledHeight;
-(FLXSClassFactory*)rendererFactory;
 -(UIView*)renderer;
 -(void)initializeCheckBoxRenderer:(UIView*)renderer;
-(void)onCheckChange:(NSNotification*)event;
-(BOOL)isLocked;
-(BOOL)isRightLocked;
-(BOOL)isLeftLocked;
-(BOOL)isContentArea;
-(id)getStyleValue:(NSString*)styleProp;
-(BOOL)isElastic;
-(BOOL)isDataCell;
-(BOOL)isChromeCell;
-(float)nestDepth;
-(float)perceivedX;
-(void)invalidateBackground;
-(BOOL)isExpandCollapseCell;
-(UIView<FLXSIExpandCollapseComponent>*)iExpandCollapseComponent;
-(NSString*)checkBoxState;


- (void)invalidateDisplayList;

//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListenerOfType:(NSString *)type usingTarget:(NSObject *)target withHandler:(SEL)handler;

- (void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods

@end

