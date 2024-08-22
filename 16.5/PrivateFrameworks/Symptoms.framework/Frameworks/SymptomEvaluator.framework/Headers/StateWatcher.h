// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STATEWATCHER_H
#define STATEWATCHER_H

@class NSDictionary, NSMutableDictionary;
@protocol StateWatcherDelegate;

#import <Foundation/Foundation.h>


@interface StateWatcher : NSObject {
    NSDictionary *_srcDestMapping;
    NSDictionary *_changeWatchList;
    NSMutableDictionary *_previousChangeWatchValues;
}


@property (retain, nonatomic) NSObject<StateWatcherDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled


-(BOOL)configureWatchList:(id)arg0 changeList:(id)arg1 sourceList:(id)arg2 ;
-(BOOL)isValidChangeList:(id)arg0 ;
-(BOOL)isValidSourceList:(id)arg0 ;
-(BOOL)isValidWatchList:(id)arg0 ;
-(id)currentStateSummary:(id)arg0 ;
-(void)deriveKeyPathListFromWatchList:(id)arg0 sourceList:(id)arg1 ;
-(void)disable;
-(void)enable;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif