// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6TIPSUI22DOCUMENTASSETVIEWMODEL_H
#define _TTC6TIPSUI22DOCUMENTASSETVIEWMODEL_H

@class SwiftObject;



@interface _TtC6TipsUI22DocumentAssetViewModel : SwiftObject {
    ? _tipsContentModel;
    ? _imageState;
    ? _player;
    ? _isAssetLoaded;
    ? _isPlaying;
    ? _isVideoLoaded;
    ? imageLoader;
    ? videoFileLoader;
    ? playerDidFinishSubject;
    ? networkIsReachableCancellable;
    ? videoLoaderCancellable;
    ? isLoading;
    ? document;
    ? prefetchTimer;
    ? didPlayToEndTime;
}






@end


#endif