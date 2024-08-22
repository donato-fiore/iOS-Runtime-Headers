// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKIMAGEANALYSISBARBUTTONITEM_H
#define VKIMAGEANALYSISBARBUTTONITEM_H



#import "VKSelectableBarButtonItem.h"

@interface VKImageAnalysisBarButtonItem : VKSelectableBarButtonItem

@property (nonatomic) NSUInteger mode; // ivar: _mode


+(id)analysisButtonWithTarget:(id)arg0 action:(SEL)arg1 mode:(NSUInteger)arg2 ;
+(id)imageForMode:(NSUInteger)arg0 ;


@end


#endif