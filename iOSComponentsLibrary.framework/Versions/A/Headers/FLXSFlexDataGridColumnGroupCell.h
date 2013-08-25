#import "FLXSVersion.h"
#import "FLXSFlexDataGridCell.h"

@class FLXSFlexDataGridColumnGroup;
@class FLXSEvent;
@class FLXSFlexDataGridColumn;

@interface FLXSFlexDataGridColumnGroupCell : FLXSFlexDataGridCell
{
}

@property (nonatomic, strong) FLXSFlexDataGridColumnGroup* columnGroup;
@property (nonatomic, assign) BOOL listenersAdded;
@property (nonatomic, assign) BOOL background;
@property (nonatomic, assign) BOOL wxInvalid;

 ;
-(void)destroy;
-(void)onColumnsResized:(FLXSEvent*)event;
-(FLXSFlexDataGridColumn*)column;
-(BOOL)drawTopBorder;
-(void)refreshCell;
-(void)invalidateWX:(NSNotification *)ns;
 -(id)getRolloverColor;
-(id)getBackgroundColors;
-(id)getTextColors;

@end

