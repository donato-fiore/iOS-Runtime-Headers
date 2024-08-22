// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI25UNIFIEDMESSAGINGVIEWMODEL_H
#define _TTC8VIDEOSUI25UNIFIEDMESSAGINGVIEWMODEL_H

@class TtC8VideosUI9ViewModel;



@interface _TtC8VideosUI25UnifiedMessagingViewModel : TtC8VideosUI9ViewModel {
    ? delegate;
    ? messageViewController;
    ? placementId;
    ? pullForSheetsDuringFetch;
    ? waitingForFetch;
    ? hasSetupViewModel;
}




-(void)handleMessageDidUpdateWithNotification:(id)arg0 ;


@end


#endif