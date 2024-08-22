// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMETRICSMEDIAEVENT_H
#define VUIMETRICSMEDIAEVENT_H


#import <Foundation/Foundation.h>


@interface VUIMetricsMediaEvent : NSObject



+(id)_convertToMs:(id)arg0 ;
+(id)_metricsDataFromTVPMediaItem:(id)arg0 contentPosition:(id)arg1 isBackground:(BOOL)arg2 isAmbient:(BOOL)arg3 actionType:(id)arg4 ;
+(id)clickMetricsDataFromTVPMediaItem:(id)arg0 ;
+(id)generateSkipImpressionsFromSkipInfo:(id)arg0 ;
+(id)impressionsMetricsDataFromTVPMediaItem:(id)arg0 ;
+(void)recordBGVideoPlayOfTVPMediaItem:(id)arg0 contentPosition:(id)arg1 isAmbient:(BOOL)arg2 actionType:(id)arg3 ;
+(void)recordBGVideoPlayOfTVPMediaItem:(id)arg0 isAmbient:(BOOL)arg1 ;
+(void)recordClickOfSkipInfo:(id)arg0 onMediaItem:(id)arg1 ;
+(void)recordImpressionsOfSkipButton:(id)arg0 onMediaItem:(id)arg1 ;
+(void)recordPlay:(id)arg0 isLaunchingExtras:(BOOL)arg1 ;
+(void)recordPlayOfTVPMediaItem:(id)arg0 ;
+(void)recordPunchout:(id)arg0 isUrlForPlay:(BOOL)arg1 ;


@end


#endif