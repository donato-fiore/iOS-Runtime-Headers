// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKPICKERSELECTABLEITEM_H
#define TKPICKERSELECTABLEITEM_H

@class NSString;


#import "TKPickerRowItem.h"

@interface TKPickerSelectableItem : TKPickerRowItem

@property (copy, nonatomic, setter=_setDetailText:) NSString *detailText; // ivar: _detailText
@property (nonatomic, setter=_setShouldPreventSelection:) BOOL shouldPreventSelection; // ivar: _shouldPreventSelection
@property (nonatomic, setter=_setShouldTintText:) BOOL shouldTintText; // ivar: _shouldTintText
@property (nonatomic, setter=_setShowsCheckmark:) BOOL showsCheckmark; // ivar: _showsCheckmark
@property (nonatomic, setter=_setShowsDisclosureIndicator:) BOOL showsDisclosureIndicator; // ivar: _showsDisclosureIndicator
@property (copy, nonatomic, setter=_setText:) NSString *text; // ivar: _text


-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif