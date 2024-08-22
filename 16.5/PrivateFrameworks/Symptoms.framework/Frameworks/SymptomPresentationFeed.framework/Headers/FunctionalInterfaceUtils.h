// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FUNCTIONALINTERFACEUTILS_H
#define FUNCTIONALINTERFACEUTILS_H


#import <Foundation/Foundation.h>


@interface FunctionalInterfaceUtils : NSObject



+(NSInteger)nwInterfaceSubtypeForNWFunctionalInterfaceType:(unsigned char)arg0 ;
+(NSInteger)nwInterfaceTypeForNWFunctionalInterfaceType:(unsigned char)arg0 ;
+(id)stringForFunctionalInterfaceType:(unsigned char)arg0 ;
+(unsigned char)nwFunctionalInterfaceTypeForNWInterface:(id)arg0 ;
+(unsigned char)nwFunctionalInterfaceTypeForNWInterfaceSubtype:(NSInteger)arg0 ;
+(unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:(NSInteger)arg0 ;
+(unsigned char)nwFunctionalInterfaceTypeForNWInterfaceType:(NSInteger)arg0 nwInterfaceSubtype:(NSInteger)arg1 ;


@end


#endif