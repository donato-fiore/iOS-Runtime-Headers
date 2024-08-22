// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI31DOWNLOADSTATEINDICATORVIEWMODEL_H
#define _TTC8VIDEOSUI31DOWNLOADSTATEINDICATORVIEWMODEL_H

@class TtC8VideosUI9ViewModel;



@interface _TtC8VideosUI31DownloadStateIndicatorViewModel : TtC8VideosUI9ViewModel {
    ? _imageViewModel;
    ? _downloadProgress;
    ? downloadModel;
    ? downloadStateObserver;
    ? progressObserver;
}




-(void)downloadStarted:(id)arg0 ;


@end


#endif