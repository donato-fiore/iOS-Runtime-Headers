// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSJSONCACHECONTROLLER_H
#define TPSJSONCACHECONTROLLER_H



#import "TPSDataCacheController.h"

@interface TPSJSONCacheController : TPSDataCacheController



+(id)sharedInstance;
-(BOOL)isURLValid:(id)arg0 ;
-(id)formattedDataWithData:(id)arg0 ;
-(id)formattedDataWithFileURL:(id)arg0 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif