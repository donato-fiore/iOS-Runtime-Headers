// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISQLITECKDATABASEFAILUREINJECTIONDELEGATE_H
#define TRISQLITECKDATABASEFAILUREINJECTIONDELEGATE_H

@class NSMutableArray;
@protocol TRISQLiteCKDatabaseDelegate, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRISQLiteCKDatabaseFailureInjectionDelegate : NSObject <TRISQLiteCKDatabaseDelegate, NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *fetchErrors; // ivar: _fetchErrors
@property (retain, nonatomic) NSMutableArray *queryErrors; // ivar: _queryErrors


+(BOOL)supportsSecureCoding;
-(BOOL)shouldProcessFetchOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldProcessQueryOperation:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithErrorForAllOperations:(id)arg0 ;
-(id)initWithQueryErrors:(id)arg0 fetchErrors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif