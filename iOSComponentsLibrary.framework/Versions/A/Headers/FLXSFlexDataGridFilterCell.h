#import "FLXSVersion.h"
#import "FLXSFlexDataGridCell.h"

@interface FLXSFlexDataGridFilterCell : FLXSFlexDataGridCell
{
}


-(id)getBackgroundColors;
-(id)getIconUrl:(BOOL)over;
-(id)getTextColors;
-(void)initializeCheckBoxRenderer:(UIView*)renderer;
-(id)getRolloverColor;
-(void)destroy;
-(void)refreshCell;
-(NSString*)prefix;
-(BOOL)drawTopBorder;

+ (NSString*)FILTER_CHANGE;
@end

