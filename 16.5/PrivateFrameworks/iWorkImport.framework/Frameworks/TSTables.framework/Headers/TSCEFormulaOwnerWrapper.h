// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEFORMULAOWNERWRAPPER_H
#define TSCEFORMULAOWNERWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying>

 {
    TSKUIDStruct _ownerUID;
}


@property (readonly, nonatomic) *TSKUIDStruct ownerUID;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTSCEFormulaOwnerWrapper:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFormulaOwnerUID:(struct TSKUIDStruct *)arg0 ;


@end


#endif