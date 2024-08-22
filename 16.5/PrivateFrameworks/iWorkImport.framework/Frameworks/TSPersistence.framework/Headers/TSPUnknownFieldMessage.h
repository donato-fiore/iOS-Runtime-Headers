// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPUNKNOWNFIELDMESSAGE_H
#define TSPUNKNOWNFIELDMESSAGE_H

@class NSArray;


#import "TSPUnknownField.h"
#import "TSPLazyReferenceArray.h"

@interface TSPUnknownFieldMessage : TSPUnknownField {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_datas;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif