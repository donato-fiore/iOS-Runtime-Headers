// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEQUATIONINFO_H
#define TSWPEQUATIONINFO_H



#import "TSDDrawableInfo.h"
#import "EQKitEquation.h"

@interface TSWPEquationInfo : TSDDrawableInfo

@property (retain, nonatomic) EQKitEquation *equation; // ivar: _equation


-(?)initWithContext:(?)arg0 mathMLNodefromXMLDoc;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(void)dealloc;


@end


#endif