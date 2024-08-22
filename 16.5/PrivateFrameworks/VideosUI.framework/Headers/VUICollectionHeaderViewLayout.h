// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICOLLECTIONHEADERVIEWLAYOUT_H
#define VUICOLLECTIONHEADERVIEWLAYOUT_H

@class TVViewLayout, TVImageLayout;


#import "VUITextLayout.h"

@interface VUICollectionHeaderViewLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *imageViewLayout; // ivar: _imageViewLayout
@property (readonly, nonatomic) VUITextLayout *subtitleTextLayout; // ivar: _subtitleTextLayout
@property (readonly, nonatomic) VUITextLayout *titleTextLayout; // ivar: _titleTextLayout


+(id)maxImageContentSizeCategory;
-(id)init;


@end


#endif