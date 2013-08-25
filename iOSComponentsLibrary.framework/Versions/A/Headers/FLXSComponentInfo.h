#import "FLXSVersion.h"

@class FLXSRowInfo;
@protocol FLXSIFlexDataGridCell;

@interface FLXSComponentInfo : NSObject
{
}

@property (nonatomic, strong) UIView<FLXSIFlexDataGridCell>* component;
@property (nonatomic, assign) float x;
@property (nonatomic, strong) FLXSRowInfo* row;
@property (nonatomic, assign) BOOL inCornerAreas;
@property (nonatomic, assign) BOOL useComponentPosition;

- (id)initWithCell:(UIView *)component andX:(float)x andRowInfo:(FLXSRowInfo *)row;
-(BOOL)isLocked;
-(BOOL)isRightLocked;
-(BOOL)isLeftLocked;
-(BOOL)isContentArea;
-(float)perceivedX;
-(int)colIndex;

@end

