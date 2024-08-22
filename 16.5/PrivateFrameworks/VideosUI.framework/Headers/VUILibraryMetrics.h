// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILIBRARYMETRICS_H
#define VUILIBRARYMETRICS_H


#import <Foundation/Foundation.h>


@interface VUILibraryMetrics : NSObject



+(id)getMediaEntityContentType:(id)arg0 ;
+(id)getMediaItemContentType:(id)arg0 ;
+(id)pageStringForEntityType:(id)arg0 ;
+(id)pageStringForLibraryCategoryType:(NSInteger)arg0 ;
+(id)pageStringForLibraryCellType:(NSInteger)arg0 ;
+(id)pageStringForLibraryShelfType:(NSInteger)arg0 ;
+(void)recordClickOnMediaEntity:(id)arg0 ;
+(void)recordPageEventWithPageId:(id)arg0 andPageType:(id)arg1 ;
+(void)recordPageEventWithPageType:(id)arg0 ;
+(void)recordPlayOfMediaEntity:(id)arg0 isLaunchingExtras:(BOOL)arg1 ;
+(void)recordPlayOfMediaItem:(id)arg0 ;


@end


#endif