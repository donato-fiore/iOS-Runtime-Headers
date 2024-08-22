// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSSEARCHQUERYMANAGER_H
#define TPSSEARCHQUERYMANAGER_H


#import <Foundation/Foundation.h>


@interface TPSSearchQueryManager : NSObject {
    ? syncQueue;
    ? pendingQueries;
}




+(id)shared;
-(id)init;
-(void)cancelQueryWithIdentifier:(id)arg0 ;
-(void)performQuery:(id)arg0 completion:(id)arg1 ;


@end


#endif