// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYINDICATORMESSAGELABEL_H
#define _UIACTIVITYINDICATORMESSAGELABEL_H

@class NSDictionary;


#import "UILabel.h"

@interface _UIActivityIndicatorMessageLabel : UILabel

@property (readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // ivar: _effectiveTextAttributes
@property (copy, nonatomic) NSDictionary *regularTextAttributes; // ivar: _regularTextAttributes
@property (readonly, nonatomic) CGFloat verticalSpacingToSpinner;


+(id)defaultRegularContentSizeTextAttributes;
-(CGFloat)_effectiveVerticalSpacingToSpinner;
-(id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg0 ;
-(id)_validatedAttributedString:(id)arg0 ;
-(id)initWithRegularTextAttributes:(id)arg0 ;
-(void)_ensureCapableOfCalculatingBaselineOffsets;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif