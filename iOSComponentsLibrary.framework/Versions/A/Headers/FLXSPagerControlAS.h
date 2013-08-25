#import "FLXSVersion.h"
#import "FLXSExportOptionsViewController.h"
#import "FLXSMultiColumnSortViewController.h"
#import "FLXSSettingsViewController.h"
#import "FLXSSavePreferenceViewController.h"


@class FLXSFlexDataGridColumnLevel;
@class FLXSRowInfo;
@class FLXSComboBox;

@class FLXSClassFactory;
@class FLXSEvent;
@class FLXSFlexDataGrid;
@class FLXSFlexDataGridEvent;
@class FLXSToolbarAction;

@interface FLXSPagerControlAS : UIScrollView
{
    UIToolbar *toolBar ;

}

@property (nonatomic, assign) int totalRecords;
@property (nonatomic, assign) int pageSize;
@property (nonatomic, assign) int pageIndex;
@property (nonatomic, strong) NSString* pagerPosition;
@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic, strong) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) FLXSRowInfo* rowInfo;
@property (nonatomic, assign) BOOL pageDropdownDirty;
@property (nonatomic, strong) UIView* popMenu;
@property (nonatomic, strong) UILabel* lblPaging;
@property (nonatomic, strong) UIButton* BTN_FIRST_PAGE;
@property (nonatomic, strong) UIButton* BTN_PREV_PAGE;
@property (nonatomic, strong) UIButton* BTN_NEXT_PAGE;
@property (nonatomic, strong) UIButton* BTN_LAST_PAGE;
@property (nonatomic, strong) UILabel* lblGotoPage;
@property (nonatomic, strong) FLXSComboBox* cbxPage;
@property (nonatomic, strong) UIView* hboxToolbar;
@property (nonatomic, strong) UIButton* BTN_MCS;
@property (nonatomic, strong) UIButton* BTN_EXP_ONE_DOWN;
@property (nonatomic, strong) UIButton* BTN_EXP_ONE_UP;
@property (nonatomic, strong) UIButton* BTN_EXP_ALL;
@property (nonatomic, strong) UIButton* BTN_COLLAPSE_ALL;
@property (nonatomic, strong) UIButton* BTN_PREFERENCES;
@property (nonatomic, strong) UIButton* BTN_SAVE_PREFS;
@property (nonatomic, strong) UIButton* BTN_OPEN_PREFS;
@property (nonatomic, strong) UIButton* BTN_FOOTER;
@property (nonatomic, strong) UIButton* BTN_FILTER;
@property (nonatomic, strong) UIButton* BTN_RUN_FILTER;
@property (nonatomic, strong) UIButton* BTN_CLEAR_FILTER;
@property (nonatomic, strong) UIButton* BTN_PRINT;
@property (nonatomic, strong) UIButton* BTN_PDF;
@property (nonatomic, strong) UIButton* BTN_WORD;
@property (nonatomic, strong) UIButton* BTN_EXCEL;
@property (nonatomic, assign) BOOL built;
@property (nonatomic, assign) int levelDepth;
@property (nonatomic, assign) int padding;
@property (nonatomic, strong) FLXSClassFactory* separatorFactory;
@property (nonatomic, assign) BOOL dispatchEvents;
@property (nonatomic, assign) BOOL actionsWidthInvalid;


-(void)popupButton_openHandler:(FLXSEvent*)event;
-(void)onImgFirstClick;
-(void)onImgPreviousClick;
-(void)onImgNextClick;
-(void)onImgLastClick;
-(void)onPageCbxChange;
-(void)onPageChanged;
-(void)onCreationComplete:(FLXSEvent*)event;
-(void)reset;
-(int)pageStart;
-(int)pageEnd;
-(int)pageCount;
-(FLXSFlexDataGrid*)nestedGrid;
-(void)onWordExport;
-(void)onExcelExport;
-(void)onPrint;
-(void)onPdf;
-(void)onClearFilter;
-(void)onProcessFilter;
-(void)onShowHideFilter;
-(void)onShowHideFooter;
-(void)onShowSettingsPopup;
-(void)onSaveSettingsPopup;
-(void)onOpenSettingsPopup;
-(void)createToolbarActions;

+ (UIImage*)_toolbarActionIcon;
+ (void)applyTheme:(NSString*) themeName;

+ (UIImage*)iconFirstPage;
+ (UIImage*)iconPrevPage;
+ (UIImage*)iconNextPage;
+ (UIImage*)iconLastPage;
+ (UIImage*)iconMultiColumnSort;
+ (UIImage*)iconExpandOne;
+ (UIImage*)iconCollapseOne;
+ (UIImage*)iconExpandAll;
+ (UIImage*)iconCollapseAll;
+ (UIImage*)iconSettings;
+ (UIImage*)iconSaveSettings;
+ (UIImage*)iconOpenSettings;
+ (UIImage*)iconFooterShowHide;
+ (UIImage*)iconFilterShowHide;
+ (UIImage*)iconFilterRun;
+ (UIImage*)iconFilterClear;
+ (UIImage*)iconPrint;
+ (UIImage*)iconPdf;
+ (UIImage*)iconExportWord;
+ (UIImage*)iconExportExcel;
@end

