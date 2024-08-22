// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYAUDITUTILITIES_H
#define UIACCESSIBILITYAUDITUTILITIES_H


#import <Foundation/Foundation.h>


@interface UIAccessibilityAuditUtilities : NSObject



+(BOOL)checkBoolValueForOptionsKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)dictionaryWithAXAuditIssue:(NSInteger)arg0 element:(id)arg1 additionalInfo:(id)arg2 identifier:(id)arg3 foregroundColor:(id)arg4 backgroundColor:(id)arg5 fontSize:(id)arg6 elementRect:(id)arg7 text:(id)arg8 ;
+(id)optionsDictionaryForAuditTest:(id)arg0 inDictionary:(id)arg1 ;


@end


#endif