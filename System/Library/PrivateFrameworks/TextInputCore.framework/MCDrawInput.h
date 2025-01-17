/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCDrawInput : MCKeyboardInput {

	int _drawHand;
	RefPtr<TI::Favonius::KeyboardLayout>* _keyboardLayout;
	CGRect _currentLayoutCharacterKeysFrame;
	PathResampler* _resampler;

}

@property (nonatomic,readonly) PathResampler* resampler;                                          //@synthesize resampler=_resampler - In the implementation block
@property (assign,nonatomic) int drawHand;                                                        //@synthesize drawHand=_drawHand - In the implementation block
@property (nonatomic,readonly) RefPtr<TI::Favonius::KeyboardLayout>* keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,readonly) CGRect currentLayoutCharacterKeysFrame;                            //@synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame - In the implementation block
@property (nonatomic,readonly) BOOL isCompleting; 
@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) BOOL isDrawing; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isComplete;
-(BOOL)isCompleting;
-(RefPtr<TI::Favonius::KeyboardLayout>*)keyboardLayout;
-(BOOL)isDrawing;
-(CGRect)currentLayoutCharacterKeysFrame;
-(BOOL)canComposeNew:(id)arg1 ;
-(void)composeNew:(id)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 ;
-(id)initWithKeyboardLayout:(const RefPtr<TI::Favonius::KeyboardLayout>*)arg1 currentLayoutCharacterKeysFrame:(CGRect)arg2 ;
-(Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0>*)copyLayoutKeys;
-(BOOL)_canCompose;
-(void)composeWith:(id)arg1 ;
-(void)_appendAndResampleWithPoint:(CGPoint)arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 shouldFinalize:(BOOL)arg5 ;
-(void)_updateSampledInputs;
-(void)_updateSampledInputsWithResampler:(const PathResampler*)arg1 permanentlyFinalized:(BOOL)arg2 ;
-(PathResampler*)resampler;
-(int)drawHand;
-(void)setDrawHand:(int)arg1 ;
@end

