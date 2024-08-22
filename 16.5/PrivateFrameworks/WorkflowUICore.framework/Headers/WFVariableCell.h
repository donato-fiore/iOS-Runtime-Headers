// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLECELL_H
#define WFVARIABLECELL_H

@class UICollectionViewCell, WFIcon, NSString, WFVariable;


#import "WFVariablePillView.h"

@interface WFVariableCell : UICollectionViewCell

@property (nonatomic) BOOL currentAvailable; // ivar: _currentAvailable
@property (nonatomic) NSUInteger currentControlState; // ivar: _currentControlState
@property (retain, nonatomic) WFIcon *currentIcon; // ivar: _currentIcon
@property (retain, nonatomic) NSString *currentTitle; // ivar: _currentTitle
@property (readonly, nonatomic) WFVariablePillView *pillView; // ivar: _pillView
@property (retain, nonatomic) WFVariable *variable; // ivar: _variable


+(CGFloat)widthWithVariable:(id)arg0 height:(CGFloat)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateVariableImage;


@end


#endif