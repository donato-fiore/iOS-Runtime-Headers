// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCAFETCHSQLITEREQUEST_H
#define WCAFETCHSQLITEREQUEST_H

@class NSArray, NSDictionary, NSString;


#import "WCAFetchRequest.h"

@interface WCAFetchSQLiteRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (copy, nonatomic) NSString *tableName; // ivar: _tableName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif