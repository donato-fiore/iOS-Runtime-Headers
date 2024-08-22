// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEWSUPDATER_H
#define NEWSUPDATER_H

@protocol NewsUpdaterDelegate;


#import "YQLRequest.h"
#import "StockNewsItemCollection.h"
#import "Stock.h"

@interface NewsUpdater : YQLRequest {
    BOOL _firstLoad;
    CGFloat _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    id *_updateCompletionHandler;
}


@property (weak, nonatomic) NSObject<NewsUpdaterDelegate> *delegate; // ivar: _delegate


+(id)_newsItemCollectionCache;
+(id)sharedNewsUpdater;
-(BOOL)shouldReloadOnResume;
-(id)init;
-(void)clearNewsCacheOnDisk;
-(void)didParseData;
-(void)failWithError:(id)arg0 ;
-(void)fetchNewsForStock:(id)arg0 ;
-(void)fetchNewsForStock:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg0 ;
-(void)parseData:(id)arg0 ;
-(void)resetLocale;
-(void)saveLastResponse;


@end


#endif