// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCSCALLLOG_H
#define TCSCALLLOG_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface TCSCallLog : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *calls; // ivar: _calls
@property (retain, nonatomic) NSMutableOrderedSet *identifiers; // ivar: _identifiers


-(id)callWithUniqueProxyIdentifier:(id)arg0 ;
-(id)init;
-(void)_trimCache;
-(void)addCall:(id)arg0 ;


@end


#endif