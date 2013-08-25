#import "FLXSIFilterControl.h"

#import "FLXSIRangeFilterControl.h"
#import "FLXSEvent.h"
#import "FLXSTextInput.h"


@interface FLXSNumericRangeBox : UIView
{
	@private
		FLXSTextInput* textBoxStart;
		UILabel* separatorText;
		FLXSTextInput* textBoxEnd;
		BOOL _relinquishFocus;
		BOOL _shiftTabHandled;
		BOOL _tabHandled;
}

@property (nonatomic, strong) FLXSTextInput* textBoxStart;
@property (nonatomic, strong) UILabel* separatorText;
@property (nonatomic, strong) FLXSTextInput* textBoxEnd;
@property (nonatomic, assign) BOOL relinquishFocus;
@property (nonatomic, assign) BOOL shiftTabHandled;
@property (nonatomic, assign) BOOL tabHandled;

-(void)commitProperties;
-(float)rangeStart;
-(void)rangeStart:(float)o;
-(float)rangeEnd;
-(void)rangeEnd:(float)o;

-(void)onChange_textBoxEnd:(FLXSEvent*)evt;
-(void)onChange_textBoxStart:(FLXSEvent*)evt;
-(void)onChange;
-(BOOL)isRangeValid;
-(NSArray*)range;
-(void)range:(NSArray*)value;
-(void)reset;
-(NSObject*)searchRangeStart;
-(NSObject*)searchRangeEnd;
-(NSObject*)minValue;
-(NSObject*)maxValue;
-(void)clear;
-(NSObject*)getValue;
-(void)setValue:(NSObject*)val;
-(void)setFocus;
-(void)drawFocus:(BOOL)isFocused;

@end

