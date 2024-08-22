// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTONECLASSICSPICKERITEM_H
#define TKTONECLASSICSPICKERITEM_H



#import "TKTonePickerItem.h"

@interface TKToneClassicsPickerItem : TKTonePickerItem

@property (nonatomic, setter=_setClassicToneIndex:) NSInteger classicToneIndex; // ivar: _classicToneIndex
@property (weak, nonatomic, setter=_setParentItem:) TKTonePickerItem *parentItem; // ivar: _parentItem


-(id)childItemAtIndex:(NSInteger)arg0 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif