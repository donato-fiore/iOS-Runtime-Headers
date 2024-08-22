// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10STOCKSCORE24CLOUDKITWATCHLISTSERVICE_H
#define _TTC10STOCKSCORE24CLOUDKITWATCHLISTSERVICE_H

@class SwiftObject;
@protocol SCWWatchlistObserver;



@interface _TtC10StocksCore24CloudKitWatchlistService : SwiftObject <SCWWatchlistObserver>

 {
    ? observers;
    ? metadataManager;
    ? metadataProvider;
    ? lazyWatchlist;
}




-(void)watchlistManager:(id)arg0 didChangeInWatchlist:(id)arg1 ;
-(void)watchlistManager:(id)arg0 didChangeInWatchlistOrder:(id)arg1 ;


@end


#endif