// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKPICKERSECTIONITEM_H
#define TKPICKERSECTIONITEM_H

@class NSString;


#import "TKPickerItem.h"

@interface TKPickerSectionItem : TKPickerItem

@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText; // ivar: _footerText
@property (copy, nonatomic, setter=_setText:) NSString *text; // ivar: _text


-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif