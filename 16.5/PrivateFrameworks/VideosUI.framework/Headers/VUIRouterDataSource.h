// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIROUTERDATASOURCE_H
#define VUIROUTERDATASOURCE_H


#import <Foundation/Foundation.h>

#import "VUIEventDataSource.h"

@interface VUIRouterDataSource : NSObject

@property (retain, nonatomic) VUIEventDataSource *contextMenuEventDataSource; // ivar: _contextMenuEventDataSource
@property (retain, nonatomic) VUIEventDataSource *playEventDataSource; // ivar: _playEventDataSource
@property (retain, nonatomic) VUIEventDataSource *selectEventDataSource; // ivar: _selectEventDataSource


-(id)initWithLibraryMediaEntity:(id)arg0 ;
-(id)initWithRouterData:(id)arg0 appContext:(id)arg1 ;
-(id)initWithRouterData:(id)arg0 prefetchedData:(id)arg1 ;


@end


#endif