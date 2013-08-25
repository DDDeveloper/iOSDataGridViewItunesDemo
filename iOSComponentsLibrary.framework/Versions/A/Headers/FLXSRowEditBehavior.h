#import "FLXSVersion.h"
@class FLXSFlexDataGrid;
@class FLXSCellInfo;
@class FLXSEvent;
@protocol FLXSIFlexDataGridDataCell;
@class FLXSFlexDataGridItemEditEvent;
@protocol FLXSIFlexDataGridCell;

@interface FLXSRowEditBehavior : NSObject
{

}

@property (nonatomic, weak) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) UIView<FLXSIFlexDataGridDataCell>* currentEditCell;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, strong) UIView* leftLockedContent;
@property (nonatomic, strong) UIView* rightLockedContent;
@property (nonatomic, strong) UIScrollView* unlockedContent;
@property (nonatomic, strong) UIView* buttonContainer;
@property (nonatomic, assign) float buttonRowHeight;
@property (nonatomic, assign) float padding;
@property (nonatomic, assign) float buttonContainerWidth;
@property (nonatomic, assign) float buttonContainerHeight;
@property (nonatomic, assign) float keyboardHeight;
@property (nonatomic, assign) BOOL keyboardHeightMoved;


@property (nonatomic, strong) NSString* okButtonText;
@property (nonatomic, strong) UIButton* okButton;
@property (nonatomic, strong) UIButton* cancelButton;
@property (nonatomic, strong) NSString* cancelButtonText;
@property (nonatomic, strong) NSString* okButtonStyleName;
@property (nonatomic, strong) NSString* cancelButtonStyleName;
@property (nonatomic, strong) NSMutableDictionary* editorMap;
@property (nonatomic, strong) FLXSCellInfo* currentEditCellInfo;
@property (nonatomic, strong) NSString* itemEditorsValidatorFunction;
@property (nonatomic, strong) NSString* itemEditorsCommitFunction;
@property (nonatomic, strong) NSString* itemEditorsInitializeFunction;
@property (nonatomic, strong) NSMutableArray* childrenDisabledForEdit;

-(id)initWithGrid:(FLXSFlexDataGrid*)grid;

-(void)endEdit:(FLXSEvent*)event;
-(void)onItemEditBeginning:(NSNotification*)ns;
-(void)saveEditors:(UIView*)editorContainer;

- (void)drawBorder:(UIView *)sprite cell:(UIView <FLXSIFlexDataGridCell> *)cell left:(BOOL)left right:(BOOL)right top:(BOOL)top bottom:(BOOL)bottom;
-(void)onItemEditEnd:(FLXSEvent*)event;

@end

