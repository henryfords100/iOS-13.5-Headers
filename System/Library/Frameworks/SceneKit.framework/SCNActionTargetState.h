/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNActionTargetState : NSObject {

	BOOL usesEuler;
	float opacity;
	SCNVector3 position;
	SCNVector3 euler;
	SCNVector3 scale;
	SCNVector4 rotation;

}

@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 euler; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) BOOL usesEuler; 
@property (assign,nonatomic) float opacity; 
-(SCNVector3)scale;
-(SCNVector3)position;
-(void)setScale:(SCNVector3)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(SCNVector4)rotation;
-(void)setRotation:(SCNVector4)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNVector3)euler;
-(void)setEuler:(SCNVector3)arg1 ;
-(BOOL)usesEuler;
-(void)setUsesEuler:(BOOL)arg1 ;
@end

