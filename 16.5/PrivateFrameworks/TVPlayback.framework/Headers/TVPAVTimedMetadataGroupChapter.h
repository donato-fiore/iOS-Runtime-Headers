// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPAVTIMEDMETADATAGROUPCHAPTER_H
#define TVPAVTIMEDMETADATAGROUPCHAPTER_H

@class AVMetadataItem;


#import "TVPMutableChapter.h"

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter

@property (retain, nonatomic) AVMetadataItem *imageMetadataItem; // ivar: _imageMetadataItem


-(id)initWithAVTimedMetadataGroup:(id)arg0 filterByLanguages:(id)arg1 ;
-(void)_loadChapterNameFromMetadataItem:(id)arg0 ;


@end


#endif