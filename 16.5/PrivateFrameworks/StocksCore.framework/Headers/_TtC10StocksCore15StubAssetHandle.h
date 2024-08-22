// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10STOCKSCORE15STUBASSETHANDLE_H
#define _TTC10STOCKSCORE15STUBASSETHANDLE_H

@class FCAssetHandle, NSString;
@protocol FCAssetDataProvider;



@interface _TtC10StocksCore15StubAssetHandle : FCAssetHandle {
    ? identifier;
}


@property (nonatomic, readonly) NSObject<FCAssetDataProvider> *dataProvider;
@property (nonatomic, readonly) NSString *uniqueKey;


-(id)init;


@end


#endif