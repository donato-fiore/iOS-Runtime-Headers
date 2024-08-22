// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEREMOTEDATASPECIFIER_H
#define TSCEREMOTEDATASPECIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCERemoteDataSpecifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger attribute; // ivar: _attribute
@property (readonly, nonatomic) NSInteger day; // ivar: _day
@property (readonly, nonatomic) unsigned short functionIndex; // ivar: _functionIndex
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) NSUInteger hashVal; // ivar: _hashVal
@property (readonly, nonatomic) TSCEValue invalidAttributeErrorValue;
@property (readonly, nonatomic) TSCEValue invalidSymbolErrorValue;
@property (readonly, nonatomic) BOOL isCold;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) NSInteger month; // ivar: _month
@property (readonly, nonatomic) NSString *symbol; // ivar: _symbol
@property (readonly, nonatomic) NSInteger year; // ivar: _year


+(id)specifierFromArchive:(*void)arg0 ;
+(id)specifierWithFunctionIndex:(unsigned short)arg0 symbol:(id)arg1 attribute:(NSInteger)arg2 ;
+(id)specifierWithFunctionIndex:(unsigned short)arg0 symbol:(id)arg1 attribute:(NSInteger)arg2 year:(NSInteger)arg3 month:(NSInteger)arg4 day:(NSInteger)arg5 ;
-(BOOL)hasDateEqualToDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)p_timeInterval;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithFunctionIndex:(unsigned short)arg0 symbol:(id)arg1 attribute:(NSInteger)arg2 year:(NSInteger)arg3 month:(NSInteger)arg4 day:(NSInteger)arg5 ;
-(id)specifierByChangingAttributeTo:(NSInteger)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif