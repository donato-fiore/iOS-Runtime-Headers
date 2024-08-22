// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCETRANSACTION_H
#define TSCETRANSACTION_H


#import <Foundation/Foundation.h>


@interface TSCETransaction : NSObject {
    *void _cellRefsToCheck;
    TSKUIDStruct _skipRepairBadRefsOwnerUID;
}




-(*void)cellRefsToCheck;
-(BOOL)isSkippingRepairBadRefsForOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(id)description;
-(id)initWithCalcEngine:(id)arg0 ;
-(void)addCellRefToCheck:(struct TSCECellRef *)arg0 ;
-(void)dealloc;
-(void)skipRepairBadRefsForOwnerUID:(struct TSKUIDStruct *)arg0 ;


@end


#endif