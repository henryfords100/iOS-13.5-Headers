/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSpIdProcessorDelegate.h>
#import <libobjc.A.dylib/CSSpIdSpeakerRecognizer.h>

@protocol CSSpIdSpeakerRecognizerDelegate, CSAudioFileWriter, OS_dispatch_queue;
@class NSDictionary, CSSpIdContext, NSString, CSSpIdProcessor, NSObject, CSMediaPlayingMonitor, CSVolumeMonitor, CSSpeakerIdNviOrchestrator;

@interface CSSpIdVTSpeakerRecognizer : NSObject <CSSpIdProcessorDelegate, CSSpIdSpeakerRecognizer> {

	double _lastScoreReportTimeStamp;
	BOOL _processingEnded;
	CSSpIdContext* _spIdCtx;
	NSString* _invocationStyleStr;
	id<CSSpIdSpeakerRecognizerDelegate> _delegate;
	unsigned long long _extraSamplesAtStart;
	unsigned long long _tdEndInSampleCount;
	unsigned long long _totalNumSamplesReceived;
	CSSpIdProcessor* _tdtiSpIdProcessor;
	id<CSAudioFileWriter> _dbgTdTiUttLogger;
	unsigned long long _tdtiEndInSampleCount;
	unsigned long long _numTdTiSamplesProcessed;
	unsigned long long _myriadResult;
	NSDictionary* _lastSpeakerIdInfo;
	NSObject*<OS_dispatch_queue> _queue;
	CSMediaPlayingMonitor* _mediaPlayingMonitor;
	CSVolumeMonitor* _volumeMonitor;
	CSSpeakerIdNviOrchestrator* _nviOrchestrator;

}

@property (nonatomic,retain) CSSpIdContext * spIdCtx;                                          //@synthesize spIdCtx=_spIdCtx - In the implementation block
@property (nonatomic,retain) NSString * invocationStyleStr;                                    //@synthesize invocationStyleStr=_invocationStyleStr - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpIdSpeakerRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long extraSamplesAtStart;                           //@synthesize extraSamplesAtStart=_extraSamplesAtStart - In the implementation block
@property (assign,nonatomic) unsigned long long tdEndInSampleCount;                            //@synthesize tdEndInSampleCount=_tdEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumSamplesReceived;                       //@synthesize totalNumSamplesReceived=_totalNumSamplesReceived - In the implementation block
@property (nonatomic,retain) CSSpIdProcessor * tdtiSpIdProcessor;                              //@synthesize tdtiSpIdProcessor=_tdtiSpIdProcessor - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> dbgTdTiUttLogger;                           //@synthesize dbgTdTiUttLogger=_dbgTdTiUttLogger - In the implementation block
@property (assign,nonatomic) unsigned long long tdtiEndInSampleCount;                          //@synthesize tdtiEndInSampleCount=_tdtiEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numTdTiSamplesProcessed;                       //@synthesize numTdTiSamplesProcessed=_numTdTiSamplesProcessed - In the implementation block
@property (assign,nonatomic) BOOL processingEnded;                                             //@synthesize processingEnded=_processingEnded - In the implementation block
@property (assign,nonatomic) unsigned long long myriadResult;                                  //@synthesize myriadResult=_myriadResult - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSpeakerIdInfo;                                 //@synthesize lastSpeakerIdInfo=_lastSpeakerIdInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSMediaPlayingMonitor * mediaPlayingMonitor;                      //@synthesize mediaPlayingMonitor=_mediaPlayingMonitor - In the implementation block
@property (nonatomic,retain) CSVolumeMonitor * volumeMonitor;                                  //@synthesize volumeMonitor=_volumeMonitor - In the implementation block
@property (nonatomic,retain) CSSpeakerIdNviOrchestrator * nviOrchestrator;                     //@synthesize nviOrchestrator=_nviOrchestrator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSpIdSpeakerRecognizerDelegate>)delegate;
-(void)setDelegate:(id<CSSpIdSpeakerRecognizerDelegate>)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(CSSpIdContext *)spIdCtx;
-(void)setSpIdCtx:(CSSpIdContext *)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2 ;
-(void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2 ;
-(void)setCVTTriggerPhraseDetected;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(void)_endAudioProcessing;
-(void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg1 hasFinished:(BOOL)arg2 ;
-(void)processMyriadDecision:(unsigned long long)arg1 ;
-(NSDictionary *)lastSpeakerIdInfo;
-(NSString *)invocationStyleStr;
-(void)setInvocationStyleStr:(NSString *)arg1 ;
-(unsigned long long)extraSamplesAtStart;
-(void)setExtraSamplesAtStart:(unsigned long long)arg1 ;
-(unsigned long long)tdEndInSampleCount;
-(void)setTdEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)totalNumSamplesReceived;
-(void)setTotalNumSamplesReceived:(unsigned long long)arg1 ;
-(CSSpIdProcessor *)tdtiSpIdProcessor;
-(void)setTdtiSpIdProcessor:(CSSpIdProcessor *)arg1 ;
-(id<CSAudioFileWriter>)dbgTdTiUttLogger;
-(void)setDbgTdTiUttLogger:(id<CSAudioFileWriter>)arg1 ;
-(unsigned long long)tdtiEndInSampleCount;
-(void)setTdtiEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)numTdTiSamplesProcessed;
-(void)setNumTdTiSamplesProcessed:(unsigned long long)arg1 ;
-(BOOL)processingEnded;
-(void)setProcessingEnded:(BOOL)arg1 ;
-(unsigned long long)myriadResult;
-(void)setMyriadResult:(unsigned long long)arg1 ;
-(void)setLastSpeakerIdInfo:(NSDictionary *)arg1 ;
-(CSMediaPlayingMonitor *)mediaPlayingMonitor;
-(void)setMediaPlayingMonitor:(CSMediaPlayingMonitor *)arg1 ;
-(CSVolumeMonitor *)volumeMonitor;
-(void)setVolumeMonitor:(CSVolumeMonitor *)arg1 ;
-(CSSpeakerIdNviOrchestrator *)nviOrchestrator;
-(void)setNviOrchestrator:(CSSpeakerIdNviOrchestrator *)arg1 ;
@end

