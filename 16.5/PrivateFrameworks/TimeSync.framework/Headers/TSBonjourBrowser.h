// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSBONJOURBROWSER_H
#define TSBONJOURBROWSER_H

@class NSArray;
@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;

#import <Foundation/Foundation.h>


@interface TSBonjourBrowser : NSObject {
    *_DNSServiceRef_t _sdRef;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSObject<TSBonjourBrowserDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes


-(BOOL)startBrowsingWithError:(*id)arg0 ;
-(BOOL)stopBrowsing;
-(id)init;
-(void)addedServiceWithName:(char *)arg0 regType:(char *)arg1 domain:(char *)arg2 onInterface:(unsigned int)arg3 withFlags:(unsigned int)arg4 ;
-(void)dealloc;
-(void)removedServiceWithName:(char *)arg0 regType:(char *)arg1 domain:(char *)arg2 onInterface:(unsigned int)arg3 withFlags:(unsigned int)arg4 ;


@end


#endif