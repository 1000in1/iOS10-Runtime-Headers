/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroActivityItemProvider : UIActivityItemProvider <ExportDelegate> {
    bool  _debugDisableProgressUpdates;
    <MiroActivityItemProviderDelegate> * _delegate;
    ExportController * _exportController;
    bool  _lowBatteryCancelled;
    NSString * _preset;
    <MiroPreventDismissalDelegate> * _preventDismissalDelegate;
    double  _progress;
    PHActivityProgressViewController * _progressController;
    Project * _project;
    NSObject<OS_dispatch_semaphore> * _readyToReturnItem;
    bool  _userCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroActivityItemProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ExportController *exportController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lowBatteryCancelled;
@property (nonatomic, retain) NSString *preset;
@property (nonatomic) <MiroPreventDismissalDelegate> *preventDismissalDelegate;
@property (nonatomic) double progress;
@property (nonatomic, retain) PHActivityProgressViewController *progressController;
@property (nonatomic, retain) Project *project;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *readyToReturnItem;
@property (readonly) Class superclass;
@property (nonatomic) bool userCancelled;

- (void).cxx_destruct;
- (void)beginExport;
- (id)delegate;
- (void)didFinishExport;
- (id)exportController;
- (void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(bool)arg3;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithProject:(id)arg1;
- (id)item;
- (bool)lowBatteryCancelled;
- (id)preset;
- (id)preventDismissalDelegate;
- (double)progress;
- (id)progressController;
- (id)project;
- (id)readyToReturnItem;
- (void)setDelegate:(id)arg1;
- (void)setExportController:(id)arg1;
- (void)setLowBatteryCancelled:(bool)arg1;
- (void)setPreset:(id)arg1;
- (void)setPreventDismissalDelegate:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressController:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setReadyToReturnItem:(id)arg1;
- (void)setUserCancelled:(bool)arg1;
- (bool)userCancelled;

@end